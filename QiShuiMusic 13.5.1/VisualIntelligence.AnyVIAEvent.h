@interface VisualIntelligence.AnyVIAEvent : NSObject
@property (nonatomic) NSString originatingApplication;
@property (nonatomic) Q queryID;
- (unsigned long long)queryID;
- (id)init;
- (id)feedback;
- (void).cxx_destruct;
- (id)originatingApplication;
@end
