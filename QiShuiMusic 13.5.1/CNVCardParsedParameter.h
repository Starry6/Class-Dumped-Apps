@interface CNVCardParsedParameter : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSArray values;
- (id)values;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithName:values:;
+ (id)parameterWithName:values:;
@end
