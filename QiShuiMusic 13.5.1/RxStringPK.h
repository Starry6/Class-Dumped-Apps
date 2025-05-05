@interface RxStringPK : NSObject
@property (nonatomic) NSString token;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)getInKey;
- (long long)numericIDKey;
- (id)token;
- (id)initWithToken:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (void)setToken:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
@end
