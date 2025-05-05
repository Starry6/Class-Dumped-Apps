@interface HTSLiveTemplateInfo : IESLivePBBaseMessage
@property (nonatomic) NSString templateId;
@property (nonatomic) HTSLiveImage templatePhoto;
@property (nonatomic) BOOL hasTemplatePhoto;
@property (nonatomic) NSString authorName;
@property (nonatomic) NSString templateTitle;
@property (nonatomic) BOOL supportReplace;
@property (nonatomic) NSString replaceContent;
+ (id)descriptor;
@end
