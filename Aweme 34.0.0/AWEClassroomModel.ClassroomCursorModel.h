@interface AWEClassroomModel.ClassroomCursorModel : MTLModel
@property (nonatomic) NSString cursor;
@property (nonatomic) BOOL hasMore;
- (id)cursor;
- (id)initWithDictionary:error:;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (id)initWithCoder:;
+ (id)JSONKeyPathsByPropertyKey;
@end
