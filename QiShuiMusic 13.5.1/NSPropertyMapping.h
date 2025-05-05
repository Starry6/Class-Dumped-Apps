@interface NSPropertyMapping : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSExpression valueExpression;
@property (nonatomic) NSDictionary userInfo;
- (void)_throwIfNotEditable;
- (void)setValueExpression:;
- (id)init;
- (void)dealloc;
- (void)setName:;
- (id)userInfo;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)valueExpression;
- (void)setUserInfo:;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)_initWithDestinationName:valueExpression:;
- (id)initWithName:valueExpression:;
+ (BOOL)supportsSecureCoding;
@end
