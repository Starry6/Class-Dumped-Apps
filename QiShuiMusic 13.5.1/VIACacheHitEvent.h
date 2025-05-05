@interface VIACacheHitEvent : NSObject
@property (nonatomic) Q cachedResultQueryID;
@property (nonatomic) Q queryID;
@property (nonatomic) NSString originatingApplication;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)queryID;
- (id)feedback;
- (void).cxx_destruct;
- (id)originatingApplication;
- (id)initWithQueryID:cachedResultQueryID:originatingApplication:;
- (unsigned long long)cachedResultQueryID;
@end
