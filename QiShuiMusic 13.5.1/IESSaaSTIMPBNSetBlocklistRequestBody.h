@interface IESSaaSTIMPBNSetBlocklistRequestBody : GPBMessage
@property (nonatomic) BOOL setBlockList;
@property (nonatomic) BOOL hasSetBlockList;
@property (nonatomic) GPBInt64Array blocklistArray;
@property (nonatomic) Q blocklistArray_Count;
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
