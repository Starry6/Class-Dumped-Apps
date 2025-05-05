@interface MPModelStoreBrowseResponse : MPModelResponse
@property (nonatomic) MPModelStoreBrowseResponseParser parser;
@property (nonatomic) MPChangeDetails changeDetails;
@property (nonatomic) BOOL hasAdditionalContentItems;
- (void).cxx_destruct;
- (id)parser;
- (id)changeDetails;
- (void)setParser:;
- (BOOL)hasAdditionalContentItems;
- (void)setChangeDetails:;
@end
