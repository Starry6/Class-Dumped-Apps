@interface IESLiveSaaSPhotoTosUploadConfig : BDDynamicMTLModel
@property (nonatomic) NSDictionary params;
@property (nonatomic) q actionType;
@property (nonatomic) double minWidth;
@property (nonatomic) double minHeight;
@property (nonatomic) double maxWidth;
@property (nonatomic) double maxHeight;
@property (nonatomic) Q maxLength;
@property (nonatomic) NSString url;
@property (nonatomic) BOOL disableEdit;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
+ (id)JSONKeyPathsByPropertyKey;
@end
