@interface BWNodeErrorMessage : BWNodeMessage
@property (nonatomic) BWNodeError nodeError;
- (void)dealloc;
- (id)nodeError;
+ (id)newMessageWithNodeError:;
@end
