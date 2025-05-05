@interface ToygerBlobElem : ToygerBaseModel
@property (nonatomic) NSString type;
@property (nonatomic) NSString subType;
@property (nonatomic) NSNumber idx;
@property (nonatomic) NSString version;
@property (nonatomic) NSString content;
@property (nonatomic) NSArray optionalContent;
@property (nonatomic) NSArray faceInfos;
@property (nonatomic) ToygerDocInfo docInfo;
- (id)docInfo;
- (id)optionalContent;
- (void)setIdx:;
- (void)setDocInfo:;
- (void)setFaceInfos:;
- (void)setOptionalContent:;
- (id)content;
- (void)setContent:;
- (id)init;
- (void)setVersion:;
- (id)version;
- (void)setType:;
- (id)type;
- (void).cxx_destruct;
- (id)subType;
- (void)setSubType:;
- (id)idx;
- (id)faceInfos;
+ (id)blobElemFrom:type:subType:idx:faceInfo:docInfo:;
@end
