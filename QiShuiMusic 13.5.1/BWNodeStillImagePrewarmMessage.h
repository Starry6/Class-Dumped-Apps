@interface BWNodeStillImagePrewarmMessage : BWNodeMessage
@property (nonatomic) BWStillImageSettings stillImageSettings;
- (void)dealloc;
- (id)stillImageSettings;
+ (id)newMessageWithStillImageSettings:;
@end
