@interface TRIPBOption : TRIPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) TRIPBAny value;
@property (nonatomic) BOOL hasValue;
+ (id)descriptor;
@end
