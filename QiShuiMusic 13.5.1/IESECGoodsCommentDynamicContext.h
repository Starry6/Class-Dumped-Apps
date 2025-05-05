@interface IESECGoodsCommentDynamicContext : NSObject
@property (nonatomic) BOOL isImpressionTag;
@property (nonatomic) NSString generalID;
@property (nonatomic) NSString commentEntrance;
@property (nonatomic) NSString fromKOLID;
@property (nonatomic) NSString KOLID;
@property (nonatomic) q dataType;
@property (nonatomic) NSDictionary extraParams;
- (id)KOLID;
- (id)commentEntrance;
- (BOOL)isImpressionTag;
- (void)setExtraParams:;
- (id)extraParams;
- (id)fromKOLID;
- (id)generalID;
- (void)setCommentEntrance:;
- (void)setFromKOLID:;
- (void)setGeneralID:;
- (void)setIsImpressionTag:;
- (void)setKOLID:;
- (void)setDataType:;
- (long long)dataType;
- (void).cxx_destruct;
@end
