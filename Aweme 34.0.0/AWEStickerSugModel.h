@interface AWEStickerSugModel : MTLModel
@property (nonatomic) NSString content;
@property (nonatomic) NSArray highlightPositions;
@property (nonatomic) AWEStickerSugRecordModel wordRecord;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)wordRecord;
- (void)setWordRecord:;
- (id)highlightPositions;
- (void)setHighlightPositions:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
+ (id)wordRecordJSONTransformer;
+ (id)highlightPositionsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
