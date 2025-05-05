@interface IDSServicePseudonymChange : NSObject
@property (nonatomic) IDSPseudonym pseudonym;
@property (nonatomic) Q changeType;
@property (nonatomic) q updateFlags;
- (long long)updateFlags;
- (unsigned long long)changeType;
- (unsigned long long)hash;
- (id)pseudonym;
- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:;
- (id)initWithPseudonym:changeType:updateFlags:;
- (BOOL)isEqualToPseudonymChange:;
@end
