@interface CNVCardParameter : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString value;
- (id)initWithName:value:;
- (void).cxx_destruct;
- (id)value;
- (id)name;
+ (id)parameterWithName:value:;
@end
