@interface IESPrefetchOccasionTemplate : NSObject
@property (nonatomic) NSMutableDictionary occasions;
@property (nonatomic) NSArray children;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)addOccasionNode:;
- (unsigned long long)countOfNodes;
- (id)occasions;
- (void)setOccasions:;
- (id)jsonRepresentation;
- (id)process:;
- (id)children;
- (void)setChildren:;
- (void).cxx_destruct;
- (id)nodeForName:;
@end
