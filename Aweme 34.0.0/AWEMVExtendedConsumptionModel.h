@interface AWEMVExtendedConsumptionModel : NSObject
@property (nonatomic) NSString content;
@property (nonatomic) NSString subContent;
@property (nonatomic) AWETemplateBarModel barInfo;
@property (nonatomic) BOOL isMixRelatedVideo;
@property (nonatomic) NSString barName;
@property (nonatomic) NSString itemID;
@property (nonatomic) NSString authorID;
- (id)barName;
- (void)setBarName:;
- (id)subContent;
- (void)setSubContent:;
- (void)setBarInfo:;
- (id)barInfo;
- (BOOL)isMixRelatedVideo;
- (void)setIsMixRelatedVideo:;
- (id)itemID;
- (void)setItemID:;
- (id)content;
- (void)setContent:;
- (void).cxx_destruct;
- (id)authorID;
- (void)setAuthorID:;
@end
