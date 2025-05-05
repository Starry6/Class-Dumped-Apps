@interface IESSaaSTIMPBNCheckInBlockListRequestBody : GPBMessage
@property (nonatomic) q userToCheck;
@property (nonatomic) BOOL hasUserToCheck;
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
