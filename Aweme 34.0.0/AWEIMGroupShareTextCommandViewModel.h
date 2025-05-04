@interface AWEIMGroupShareTextCommandViewModel : NSObject
@property (nonatomic) NSString textCommand;
@property (nonatomic) NSString avatarURLString;
@property (nonatomic) BOOL avatarNeedMerge;
- (id)avatarURLString;
- (id)textCommand;
- (BOOL)avatarNeedMerge;
- (void)setAvatarURLString:;
- (void)setAvatarNeedMerge:;
- (void).cxx_destruct;
- (void)setTextCommand:;
@end
