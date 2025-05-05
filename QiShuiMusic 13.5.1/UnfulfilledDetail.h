@interface UnfulfilledDetail : IESLivePBBaseMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSInteger action;
@property (nonatomic) NSString schema;
+ (id)descriptor;
@end
