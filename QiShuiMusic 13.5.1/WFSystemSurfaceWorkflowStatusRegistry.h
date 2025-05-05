@interface WFSystemSurfaceWorkflowStatusRegistry : NSObject
@property (nonatomic) NSUserDefaults shortcutsUserDefaults;
- (id)init;
- (BOOL)setStatusForShareSheetWorkflows:;
- (unsigned long long)statusForSystemSurface:;
- (unsigned long long)statusForShareSheetWorkflows;
- (BOOL)setStatus:forSystemSurface:;
- (void).cxx_destruct;
- (unsigned long long)statusForServicesWorkflows;
- (BOOL)setStatusForServicesWorkflows:;
- (id)shortcutsUserDefaults;
@end
