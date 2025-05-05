@interface NSOrderedCollectionChange : NSObject
@property (nonatomic) @ object;
@property (nonatomic) q changeType;
@property (nonatomic) Q index;
@property (nonatomic) Q associatedIndex;
- (long long)changeType;
- (id)init;
- (void)dealloc;
- (id)initWithObject:type:index:associatedIndex:;
- (unsigned long long)hash;
- (id)debugDescription;
- (unsigned long long)index;
- (id)object;
- (unsigned long long)associatedIndex;
- (BOOL)isEqual:;
- (id)initWithObject:type:index:;
+ (id)changeWithObject:type:index:associatedIndex:;
+ (id)changeWithObject:type:index:;
@end
