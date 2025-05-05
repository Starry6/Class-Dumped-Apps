@interface RxIntPK : NSObject
@property (nonatomic) q ID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getInKey;
- (long long)numericIDKey;
- (void)setID:;
- (long long)ID;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithID:;
- (void)encodeWithCoder:;
- (id)description;
- (BOOL)isEqual:;
+ (id)intPKWithID:;
@end
