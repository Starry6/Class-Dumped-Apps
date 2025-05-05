@interface BRGetPausedFileListUpdater : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)initWithCallback:;
- (void)updatePausedFileURL:reply:;
+ (BOOL)supportsSecureCoding;
@end
