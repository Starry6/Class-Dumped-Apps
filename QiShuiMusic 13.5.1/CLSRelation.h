@interface CLSRelation : NSObject
@property (nonatomic) # fromEntity;
@property (nonatomic) NSString fromKey;
@property (nonatomic) # toEntity;
@property (nonatomic) NSString toKey;
@property (nonatomic) BOOL faultable;
- (void).cxx_destruct;
- (id)description;
- (id)initWithFromEntity:toEntity:onFromKey:toKey:faultable:;
- (BOOL)isInverseOfRelation:;
- (BOOL)isEquivalentToRelation:;
- (Class)fromEntity;
- (id)fromKey;
- (Class)toEntity;
- (id)toKey;
- (BOOL)isFaultable;
@end
