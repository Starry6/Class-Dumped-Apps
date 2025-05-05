@interface IESIMDiscoverCategoryRecordModel : IESIMBaseApiModel
@property (nonatomic) NSString wordID;
@property (nonatomic) NSNumber wordPosition;
@property (nonatomic) NSString wordContent;
@property (nonatomic) NSString source;
@property (nonatomic) BOOL isTracked;
- (void)setWordContent:;
- (id)wordContent;
- (void).cxx_destruct;
- (id)source;
- (void)setSource:;
- (id)wordID;
- (void)setWordID:;
- (BOOL)isTracked;
- (void)setIsTracked:;
- (id)wordPosition;
- (void)setWordPosition:;
+ (id)JSONKeyPathsByPropertyKey;
@end
