@interface HTSLiveGiftConfirmInfo : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString text;
@property (nonatomic) NSString cancelButtonText;
@property (nonatomic) NSString confirmButtonText;
@property (nonatomic) NSInteger confirmType;
+ (id)descriptor;
@end
