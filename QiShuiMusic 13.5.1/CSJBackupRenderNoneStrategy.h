@interface CSJBackupRenderNoneStrategy : CSJBackupRenderStrategy
- (id)logKeyName;
- (long long)renderType;
- (void)render_really;
- (void)render;
@end
