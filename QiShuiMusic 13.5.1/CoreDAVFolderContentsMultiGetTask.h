@interface CoreDAVFolderContentsMultiGetTask : CoreDAVContainerMultiGetTask
- (id)initWithURLs:atContainerURL:appSpecificDataItemClass:;
- (id)copyAdditionalPropElements;
- (void)setAdditionalProperties:onDataItem:;
@end
