@interface AWEECMallSFSearchResultModel : MTLModel
@property (nonatomic) NSString pID;
@property (nonatomic) NSString wordID;
@property (nonatomic) NSString word;
@property (nonatomic) NSString imgURL;
@property (nonatomic) NSString reason;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)imgURL;
- (void)setImgURL:;
- (void)setPID:;
- (id)pID;
- (void)setReason:;
- (BOOL)isEmpty;
- (void).cxx_destruct;
- (id)reason;
- (void)setWordID:;
- (id)wordID;
- (id)word;
- (void)setWord:;
+ (id)JSONKeyPathsByPropertyKey;
@end
