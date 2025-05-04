@interface AWEOpenAnchorModel : NSObject
@property (nonatomic) NSNumber anchorType;
@property (nonatomic) NSString payloadJsonStr;
@property (nonatomic) NSString anchorTitle;
@property (nonatomic) NSArray anchorIconList;
- (id)anchorTitle;
- (void)setAnchorTitle:;
- (void)setAnchorIconList:;
- (id)payloadJsonStr;
- (void)setPayloadJsonStr:;
- (id)anchorIconList;
- (void).cxx_destruct;
- (id)anchorType;
- (void)setAnchorType:;
@end
