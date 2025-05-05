@interface IESSaaSTIMPBNGetBlockListRequestBody : GPBMessage
@property (nonatomic) q cursor;
@property (nonatomic) BOOL hasCursor;
@property (nonatomic) NSInteger limit;
@property (nonatomic) BOOL hasLimit;
@property (nonatomic) BOOL blockType;
@property (nonatomic) BOOL hasBlockType;
@property (nonatomic) NSInteger convType;
@property (nonatomic) BOOL hasConvType;
@property (nonatomic) q convShortId;
@property (nonatomic) BOOL hasConvShortId;
@property (nonatomic) NSString convId;
@property (nonatomic) BOOL hasConvId;
+ (id)descriptor;
@end
