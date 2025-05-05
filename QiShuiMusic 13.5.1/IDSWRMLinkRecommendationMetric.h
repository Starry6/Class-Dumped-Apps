@interface IDSWRMLinkRecommendationMetric : NSObject
@property (nonatomic) I recommendedLinkType;
@property (nonatomic) I primaryLinkType;
@property (nonatomic) I magnetState;
@property (nonatomic) I infraWiFiState;
@property (nonatomic) NSDictionary dictionaryRepresentation;
@property (nonatomic) NSString name;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)name;
- (id)dictionaryRepresentation;
- (id)initWithRecommendedLinkType:primaryLinkType:magnetState:infraWiFiState:;
- (unsigned int)recommendedLinkType;
- (unsigned int)primaryLinkType;
- (unsigned int)magnetState;
- (unsigned int)infraWiFiState;
@end
