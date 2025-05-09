@interface AWESearchAIGCBubbleModel : MTLModel
@property (nonatomic) NSString bubbleQuery;
@property (nonatomic) double timestamp;
@property (nonatomic) NSString conversationID;
@property (nonatomic) q conversationRank;
@property (nonatomic) BOOL isLatest;
@property (nonatomic) BOOL sendFail;
@property (nonatomic) BOOL aigc_needDelete;
@property (nonatomic) BOOL aigc_needFold;
@property (nonatomic) NSDictionary appendRequestParams;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString tosid;
@property (nonatomic) q imageWidth;
@property (nonatomic) q imageHeight;
@property (nonatomic) NSArray imageURLList;
@property (nonatomic) BOOL shouldShowRotatePlaceholderImage;
@property (nonatomic) BOOL shouldShowBoxArrayAnimation;
@property (nonatomic) NSArray boxArray;
@property (nonatomic) q selectedIndex;
@property (nonatomic) BOOL isQuestionQuery;
@property (nonatomic) NSString searchID;
@property (nonatomic) NSString enterFrom;
@property (nonatomic) NSString preSearchId;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSString videoID;
@property (nonatomic) NSArray videoImageURLList;
@property (nonatomic) q videoImageHeight;
@property (nonatomic) q videoImageWidth;
@property (nonatomic) UIImage videoImage;
@property (nonatomic) NSString leftTopTittle;
- (void)setEnterFrom:;
- (id)enterFrom;
- (BOOL)aigc_needFold;
- (id)imageURLList;
- (void)setImageURLList:;
- (id)preSearchId;
- (id)videoImage;
- (void)setVideoImage:;
- (BOOL)isLatest;
- (id)videoImageURLList;
- (void)setVideoImageURLList:;
- (long long)videoImageHeight;
- (void)setVideoImageHeight:;
- (long long)videoImageWidth;
- (void)setVideoImageWidth:;
- (id)leftTopTittle;
- (void)setLeftTopTittle:;
- (BOOL)isQuestionQuery;
- (id)bubbleQuery;
- (void)setBubbleQuery:;
- (long long)conversationRank;
- (void)setConversationRank:;
- (void)setIsLatest:;
- (BOOL)sendFail;
- (void)setSendFail:;
- (BOOL)aigc_needDelete;
- (void)setAigc_needDelete:;
- (void)setAigc_needFold:;
- (id)appendRequestParams;
- (void)setAppendRequestParams:;
- (id)tosid;
- (void)setTosid:;
- (BOOL)shouldShowRotatePlaceholderImage;
- (void)setShouldShowRotatePlaceholderImage:;
- (BOOL)shouldShowBoxArrayAnimation;
- (void)setShouldShowBoxArrayAnimation:;
- (id)boxArray;
- (void)setBoxArray:;
- (void)setPreSearchId:;
- (double)timestamp;
- (void)setSelectedIndex:;
- (id)image;
- (void)setImage:;
- (id)conversationID;
- (void)setTimestamp:;
- (long long)selectedIndex;
- (void).cxx_destruct;
- (void)setConversationID:;
- (long long)imageWidth;
- (long long)imageHeight;
- (id)searchID;
- (void)setSearchID:;
- (id)videoID;
- (void)setVideoID:;
- (void)setImageHeight:;
- (void)setImageWidth:;
+ (BOOL)supportsSecureCoding;
+ (id)JSONKeyPathsByPropertyKey;
@end
