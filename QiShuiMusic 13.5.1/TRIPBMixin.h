@interface TRIPBMixin : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString root;
+ (id)descriptor;
@end
