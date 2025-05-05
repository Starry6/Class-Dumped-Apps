@interface LynxFontFaceContext : NSObject
@property (nonatomic) <LynxResourceFetcher> resourceFetcher;
@property (nonatomic) <LynxResourceProvider> resourceProvider;
@property (nonatomic) <LynxResourceFetcher> resourceServiceFetcher;
@property (nonatomic) BOOL enableLynxResourceServiceLoaderInjection;
@property (nonatomic) LynxView rootView;
@property (nonatomic) NSDictionary builderRegistedAliasFontMap;
- (void)setBuilderRegistedAliasFontMap:;
- (id)resourceFetcher;
- (void)addFontFace:;
- (id)builderRegistedAliasFontMap;
- (BOOL)enableLynxResourceServiceLoaderInjection;
- (id)getFontFaceWithFamilyName:;
- (id)getGenericResourceFetcher;
- (id)resourceServiceFetcher;
- (void)setEnableLynxResourceServiceLoaderInjection:;
- (void)setResourceFetcher:;
- (void)setResourceServiceFetcher:;
- (id)resourceProvider;
- (void).cxx_destruct;
- (id)rootView;
- (void)setRootView:;
- (void)setResourceProvider:;
@end
