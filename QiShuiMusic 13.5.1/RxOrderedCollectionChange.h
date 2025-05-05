@interface RxOrderedCollectionChange : NSObject
@property (nonatomic) @ object;
@property (nonatomic) q changeType;
@property (nonatomic) Q index;
@property (nonatomic) Q associatedIndex;
- (long long)changeType;
- (void)dealloc;
- (id)initWithObject:type:index:associatedIndex:;
- (id)debugDescription;
- (unsigned long long)index;
- (id)object;
- (id)description;
- (unsigned long long)associatedIndex;
- (id)initWithObject:type:index:;
+ (id)changeWithObject:type:index:associatedIndex:;
+ (id)changeWithObject:type:index:;
@end
