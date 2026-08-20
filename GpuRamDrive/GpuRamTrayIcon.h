#pragma once

class GpuRamTrayIcon
{
private:
	NOTIFYICONDATA m_Data;
	HICON m_hIcon;
	HICON m_hIconMounted;
	std::wstring m_Tooltip;
	bool m_isMounted = false;

public:
	GpuRamTrayIcon();
	~GpuRamTrayIcon();

	bool CreateIcon(HWND hWnd, HICON hIcon, HICON hIconMounted, UINT callbackMsg);
	bool Destroy();

	bool SetTooltip(const std::wstring& tooltip, boolean isMounted);
	bool Recreate();

	static UINT GetTaskbarCreatedMessage();
};

