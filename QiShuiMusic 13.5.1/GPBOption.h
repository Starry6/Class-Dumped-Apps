@interface GPBOption : GPBMessage
@property (nonatomic) NSString name;
@property (nonatomic) GPBAny value;
@property (nonatomic) BOOL hasValue;
+ (id)descriptor;
@end
