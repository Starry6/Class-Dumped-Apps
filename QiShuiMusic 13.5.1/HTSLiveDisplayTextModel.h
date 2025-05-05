@interface HTSLiveDisplayTextModel : IESLiveDynamicMTLModel
@property (nonatomic) NSString key;
@property (nonatomic) NSString defaultPattern;
@property (nonatomic) HTSLiveTextFormatModel defaultFormat;
@property (nonatomic) NSArray pieces;
@property (nonatomic) NSDictionary schemaInfos;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)mapFormatModel:;
- (id)htslive_mapToPBDisplayText;
- (id)mapGiftPiece:;
- (id)mapHeartPiece:;
- (id)mapImagePiece:;
- (id)mapPatternModel:;
- (id)mapPatternPiece:;
- (id)mapPiecesModel;
- (id)mapSchemaInfosModel;
- (id)mapUserPiece:;
+ (id)defaultFormatJSONTransformer;
+ (id)piecesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
