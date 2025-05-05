@interface IESLiveProfileStyleTemplate : IESLivePBBaseMessage
@property (nonatomic) q templateId;
@property (nonatomic) NSString templateName;
@property (nonatomic) HTSLiveImage templateURL;
@property (nonatomic) BOOL hasTemplateURL;
@property (nonatomic) NSString templateDescription;
+ (id)descriptor;
@end
