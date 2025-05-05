@interface TCAddAlbumDic : TCAPIRequest
@property (nonatomic) NSString paramAlbumname;
@property (nonatomic) NSString paramAlbumdesc;
@property (nonatomic) NSString paramPriv;
@property (nonatomic) NSString paramQuestion;
@property (nonatomic) NSString paramAnswer;
- (void)setParamAnswer:;
- (id)paramAlbumdesc;
- (id)paramAlbumname;
- (id)paramAnswer;
- (id)paramPriv;
- (id)paramQuestion;
- (void)setParamAlbumdesc:;
- (void)setParamAlbumname:;
- (void)setParamPriv:;
- (void)setParamQuestion:;
- (void).cxx_destruct;
+ (id)dictionary;
@end
