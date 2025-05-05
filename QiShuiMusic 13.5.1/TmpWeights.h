@interface TmpWeights : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)purge;
- (BOOL)load;
- (id)descriptor;
- (void)dealloc;
- (unsigned int)dataType;
- (id)label;
- (id)weights;
- (id)biasTerms;
- (id)copyWithZone:;
- (id)initWithWeights:useBias:desc:;
@end
