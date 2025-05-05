@interface NWMessage : NSObject
@property (nonatomic) NSObject<OS_dispatch_data> internalContent;
@property (nonatomic) NSObject<OS_nw_content_context> internalContext;
- (void).cxx_destruct;
- (id)initWithContent:context:;
- (id)internalContent;
- (void)setInternalContent:;
- (id)internalContext;
- (void)setInternalContext:;
@end
