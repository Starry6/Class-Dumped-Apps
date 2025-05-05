@interface HTSLivePreviewExposeData_Meta : IESLivePBBaseMessage
@property (nonatomic) NSInteger type;
@property (nonatomic) HTSLivePreviewExposeData_Meta_Host host;
@property (nonatomic) BOOL hasHost;
@property (nonatomic) NSString content;
+ (id)descriptor;
@end
