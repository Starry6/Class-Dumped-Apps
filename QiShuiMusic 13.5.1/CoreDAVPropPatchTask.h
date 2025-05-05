@interface CoreDAVPropPatchTask : CoreDAVActionBackedTask
@property (nonatomic) NSSet propPatchRemoveElements;
@property (nonatomic) NSSet propPatchSetElements;
@property (nonatomic) CoreDAVResponseItem responseItem;
@property (nonatomic) <CoreDAVPropPatchTaskDelegate> delegate;
@property (nonatomic) NSURL priorOrderedURL;
@property (nonatomic) NSInteger absoluteOrder;
- (id)requestBody;
- (id)initWithURL:;
- (id)httpMethod;
- (void)finishCoreDAVTaskWithError:;
- (id)copyDefaultParserForContentType:;
- (id)additionalHeaderValues;
- (void).cxx_destruct;
- (id)description;
- (void)setResponseItem:;
- (id)responseItem;
- (int)absoluteOrder;
- (void)setAbsoluteOrder:;
- (void)setPriorOrderedURL:;
- (id)priorOrderedURL;
- (id)initWithPropertiesToSet:andRemove:atURL:;
- (id)propPatchRemoveElements;
- (void)setPropPatchRemoveElements:;
- (id)propPatchSetElements;
- (void)setPropPatchSetElements:;
@end
