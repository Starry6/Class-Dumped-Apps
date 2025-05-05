@interface VIAEntryPointEvent : NSObject
@property (nonatomic) Q queryID;
@property (nonatomic) q type;
@property (nonatomic) NSString originatingApplication;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (unsigned long long)queryID;
- (void)setType:;
- (void)setQueryID:;
- (id)feedback;
- (long long)type;
- (void).cxx_destruct;
- (id)originatingApplication;
- (id)initWithQueryID:type:originatingApplication:;
- (void)setOriginatingApplication:;
@end
