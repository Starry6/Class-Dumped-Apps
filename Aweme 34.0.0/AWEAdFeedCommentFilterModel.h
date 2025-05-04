@interface AWEAdFeedCommentFilterModel : MTLModel
@property (nonatomic) NSString name;
@property (nonatomic) NSString tagId;
@property (nonatomic) NSNumber count;
@property (nonatomic) BOOL selected;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setCount:;
- (id)count;
- (void).cxx_destruct;
- (void)setName:;
- (BOOL)selected;
- (id)name;
- (void)setTagId:;
- (void)setSelected:;
- (id)tagId;
+ (BOOL)automaticallyDefaultMapping;
@end
