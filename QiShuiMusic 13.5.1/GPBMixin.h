@interface GPBMixin : GPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) NSString root;
+ (id)descriptor;
@end
