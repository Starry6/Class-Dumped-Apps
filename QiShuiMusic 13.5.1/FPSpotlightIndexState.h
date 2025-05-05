@interface FPSpotlightIndexState : NSObject
@property (nonatomic) Q phase;
@property (nonatomic) NSData lastPage;
@property (nonatomic) NSData lastChangeToken;
@property (nonatomic) NSData dataRepresentation;
- (unsigned long long)phase;
- (id)init;
- (id)lastChangeToken;
- (id)lastPage;
- (id)initWithPage:changeToken:;
- (void).cxx_destruct;
- (id)initWithChangeToken:;
- (id)description;
- (BOOL)isEqual:;
- (id)dataRepresentation;
+ (BOOL)supportsSecureCoding;
+ (id)stateWithData:;
@end
