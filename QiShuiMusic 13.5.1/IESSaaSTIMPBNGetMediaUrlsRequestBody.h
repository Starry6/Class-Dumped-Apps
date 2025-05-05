@interface IESSaaSTIMPBNGetMediaUrlsRequestBody : GPBMessage
@property (nonatomic) NSInteger sourceAppid;
@property (nonatomic) BOOL hasSourceAppid;
@property (nonatomic) NSString uri;
@property (nonatomic) BOOL hasUri;
@property (nonatomic) NSInteger mediaType;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) BOOL encrypted;
@property (nonatomic) BOOL hasEncrypted;
@property (nonatomic) NSMutableArray imgOptionsArray;
@property (nonatomic) Q imgOptionsArray_Count;
@property (nonatomic) NSMutableArray videoOptionsArray;
@property (nonatomic) Q videoOptionsArray_Count;
@property (nonatomic) NSMutableArray audioOptionsArray;
@property (nonatomic) Q audioOptionsArray_Count;
@property (nonatomic) NSMutableArray fileOptionsArray;
@property (nonatomic) Q fileOptionsArray_Count;
@property (nonatomic) NSString encryptedUri;
@property (nonatomic) BOOL hasEncryptedUri;
@property (nonatomic) NSInteger readURLFrom;
@property (nonatomic) BOOL hasReadURLFrom;
+ (id)descriptor;
@end
