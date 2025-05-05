@interface SAPerformDataDetectionResult : SABaseCommand
@property (nonatomic) NSString detectionTarget;
@property (nonatomic) NSArray matches;
@property (nonatomic) NSString aceId;
@property (nonatomic) NSString refId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)matches;
- (void)setMatches:;
- (id)detectionTarget;
- (void)setDetectionTarget:;
+ (id)performDataDetectionResult;
+ (id)performDataDetectionResultWithDictionary:context:;
@end
