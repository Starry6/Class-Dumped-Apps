@interface ISGraphicSymbolResource : NSObject
@property (nonatomic) IFGraphicSymbolDescriptor descriptor;
@property (nonatomic) NSURL url;
@property (nonatomic) NSString symbolName;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)symbolName;
- (id)descriptor;
- (id)url;
- (void)setDescriptor:;
- (void)setSymbolName:;
- (void).cxx_destruct;
- (id)imageForSize:scale:;
- (id)initWithGraphicSymbolDescriptor:symbolName:url:;
- (void)updateDescriptorWithImageDescriptor:;
+ (id)graphicSymbolResourceWithRecipe:url:;
@end
