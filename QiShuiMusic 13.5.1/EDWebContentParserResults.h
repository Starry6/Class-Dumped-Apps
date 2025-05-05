@interface EDWebContentParserResults : NSObject
@property (nonatomic) NSDictionary dataDetectionResults;
@property (nonatomic) NSArray remoteContentLinks;
@property (nonatomic) NSArray richLinkResults;
- (void).cxx_destruct;
- (id)dataDetectionResults;
- (id)richLinkResults;
- (id)remoteContentLinks;
- (void)setRemoteContentLinks:;
- (void)setDataDetectionResults:;
- (void)setRichLinkResults:;
@end
