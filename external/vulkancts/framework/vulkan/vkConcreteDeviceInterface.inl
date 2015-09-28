/* WARNING: This is auto-generated file. Do not modify, since changes will
 * be lost! Modify the generating script instead.
 */
virtual void		destroyDevice									(VkDevice device) const;
virtual VkResult	getDeviceQueue									(VkDevice device, deUint32 queueFamilyIndex, deUint32 queueIndex, VkQueue* pQueue) const;
virtual VkResult	queueSubmit										(VkQueue queue, deUint32 cmdBufferCount, const VkCmdBuffer* pCmdBuffers, VkFence fence) const;
virtual VkResult	queueWaitIdle									(VkQueue queue) const;
virtual VkResult	deviceWaitIdle									(VkDevice device) const;
virtual VkResult	allocMemory										(VkDevice device, const VkMemoryAllocInfo* pAllocInfo, VkDeviceMemory* pMem) const;
virtual void		freeMemory										(VkDevice device, VkDeviceMemory mem) const;
virtual VkResult	mapMemory										(VkDevice device, VkDeviceMemory mem, VkDeviceSize offset, VkDeviceSize size, VkMemoryMapFlags flags, void** ppData) const;
virtual void		unmapMemory										(VkDevice device, VkDeviceMemory mem) const;
virtual VkResult	flushMappedMemoryRanges							(VkDevice device, deUint32 memRangeCount, const VkMappedMemoryRange* pMemRanges) const;
virtual VkResult	invalidateMappedMemoryRanges					(VkDevice device, deUint32 memRangeCount, const VkMappedMemoryRange* pMemRanges) const;
virtual VkResult	getDeviceMemoryCommitment						(VkDevice device, VkDeviceMemory memory, VkDeviceSize* pCommittedMemoryInBytes) const;
virtual VkResult	bindBufferMemory								(VkDevice device, VkBuffer buffer, VkDeviceMemory mem, VkDeviceSize memOffset) const;
virtual VkResult	bindImageMemory									(VkDevice device, VkImage image, VkDeviceMemory mem, VkDeviceSize memOffset) const;
virtual VkResult	getBufferMemoryRequirements						(VkDevice device, VkBuffer buffer, VkMemoryRequirements* pMemoryRequirements) const;
virtual VkResult	getImageMemoryRequirements						(VkDevice device, VkImage image, VkMemoryRequirements* pMemoryRequirements) const;
virtual VkResult	getImageSparseMemoryRequirements				(VkDevice device, VkImage image, deUint32* pNumRequirements, VkSparseImageMemoryRequirements* pSparseMemoryRequirements) const;
virtual VkResult	getPhysicalDeviceSparseImageFormatProperties	(VkPhysicalDevice physicalDevice, VkFormat format, VkImageType type, deUint32 samples, VkImageUsageFlags usage, VkImageTiling tiling, deUint32* pNumProperties, VkSparseImageFormatProperties* pProperties) const;
virtual VkResult	queueBindSparseBufferMemory						(VkQueue queue, VkBuffer buffer, deUint32 numBindings, const VkSparseMemoryBindInfo* pBindInfo) const;
virtual VkResult	queueBindSparseImageOpaqueMemory				(VkQueue queue, VkImage image, deUint32 numBindings, const VkSparseMemoryBindInfo* pBindInfo) const;
virtual VkResult	queueBindSparseImageMemory						(VkQueue queue, VkImage image, deUint32 numBindings, const VkSparseImageMemoryBindInfo* pBindInfo) const;
virtual VkResult	createFence										(VkDevice device, const VkFenceCreateInfo* pCreateInfo, VkFence* pFence) const;
virtual void		destroyFence									(VkDevice device, VkFence fence) const;
virtual VkResult	resetFences										(VkDevice device, deUint32 fenceCount, const VkFence* pFences) const;
virtual VkResult	getFenceStatus									(VkDevice device, VkFence fence) const;
virtual VkResult	waitForFences									(VkDevice device, deUint32 fenceCount, const VkFence* pFences, VkBool32 waitAll, deUint64 timeout) const;
virtual VkResult	createSemaphore									(VkDevice device, const VkSemaphoreCreateInfo* pCreateInfo, VkSemaphore* pSemaphore) const;
virtual void		destroySemaphore								(VkDevice device, VkSemaphore semaphore) const;
virtual VkResult	queueSignalSemaphore							(VkQueue queue, VkSemaphore semaphore) const;
virtual VkResult	queueWaitSemaphore								(VkQueue queue, VkSemaphore semaphore) const;
virtual VkResult	createEvent										(VkDevice device, const VkEventCreateInfo* pCreateInfo, VkEvent* pEvent) const;
virtual void		destroyEvent									(VkDevice device, VkEvent event) const;
virtual VkResult	getEventStatus									(VkDevice device, VkEvent event) const;
virtual VkResult	setEvent										(VkDevice device, VkEvent event) const;
virtual VkResult	resetEvent										(VkDevice device, VkEvent event) const;
virtual VkResult	createQueryPool									(VkDevice device, const VkQueryPoolCreateInfo* pCreateInfo, VkQueryPool* pQueryPool) const;
virtual void		destroyQueryPool								(VkDevice device, VkQueryPool queryPool) const;
virtual VkResult	getQueryPoolResults								(VkDevice device, VkQueryPool queryPool, deUint32 startQuery, deUint32 queryCount, deUintptr* pDataSize, void* pData, VkQueryResultFlags flags) const;
virtual VkResult	createBuffer									(VkDevice device, const VkBufferCreateInfo* pCreateInfo, VkBuffer* pBuffer) const;
virtual void		destroyBuffer									(VkDevice device, VkBuffer buffer) const;
virtual VkResult	createBufferView								(VkDevice device, const VkBufferViewCreateInfo* pCreateInfo, VkBufferView* pView) const;
virtual void		destroyBufferView								(VkDevice device, VkBufferView bufferView) const;
virtual VkResult	createImage										(VkDevice device, const VkImageCreateInfo* pCreateInfo, VkImage* pImage) const;
virtual void		destroyImage									(VkDevice device, VkImage image) const;
virtual VkResult	getImageSubresourceLayout						(VkDevice device, VkImage image, const VkImageSubresource* pSubresource, VkSubresourceLayout* pLayout) const;
virtual VkResult	createImageView									(VkDevice device, const VkImageViewCreateInfo* pCreateInfo, VkImageView* pView) const;
virtual void		destroyImageView								(VkDevice device, VkImageView imageView) const;
virtual VkResult	createShaderModule								(VkDevice device, const VkShaderModuleCreateInfo* pCreateInfo, VkShaderModule* pShaderModule) const;
virtual void		destroyShaderModule								(VkDevice device, VkShaderModule shaderModule) const;
virtual VkResult	createShader									(VkDevice device, const VkShaderCreateInfo* pCreateInfo, VkShader* pShader) const;
virtual void		destroyShader									(VkDevice device, VkShader shader) const;
virtual VkResult	createPipelineCache								(VkDevice device, const VkPipelineCacheCreateInfo* pCreateInfo, VkPipelineCache* pPipelineCache) const;
virtual void		destroyPipelineCache							(VkDevice device, VkPipelineCache pipelineCache) const;
virtual deUintptr	getPipelineCacheSize							(VkDevice device, VkPipelineCache pipelineCache) const;
virtual VkResult	getPipelineCacheData							(VkDevice device, VkPipelineCache pipelineCache, void* pData) const;
virtual VkResult	mergePipelineCaches								(VkDevice device, VkPipelineCache destCache, deUint32 srcCacheCount, const VkPipelineCache* pSrcCaches) const;
virtual VkResult	createGraphicsPipelines							(VkDevice device, VkPipelineCache pipelineCache, deUint32 count, const VkGraphicsPipelineCreateInfo* pCreateInfos, VkPipeline* pPipelines) const;
virtual VkResult	createComputePipelines							(VkDevice device, VkPipelineCache pipelineCache, deUint32 count, const VkComputePipelineCreateInfo* pCreateInfos, VkPipeline* pPipelines) const;
virtual void		destroyPipeline									(VkDevice device, VkPipeline pipeline) const;
virtual VkResult	createPipelineLayout							(VkDevice device, const VkPipelineLayoutCreateInfo* pCreateInfo, VkPipelineLayout* pPipelineLayout) const;
virtual void		destroyPipelineLayout							(VkDevice device, VkPipelineLayout pipelineLayout) const;
virtual VkResult	createSampler									(VkDevice device, const VkSamplerCreateInfo* pCreateInfo, VkSampler* pSampler) const;
virtual void		destroySampler									(VkDevice device, VkSampler sampler) const;
virtual VkResult	createDescriptorSetLayout						(VkDevice device, const VkDescriptorSetLayoutCreateInfo* pCreateInfo, VkDescriptorSetLayout* pSetLayout) const;
virtual void		destroyDescriptorSetLayout						(VkDevice device, VkDescriptorSetLayout descriptorSetLayout) const;
virtual VkResult	createDescriptorPool							(VkDevice device, const VkDescriptorPoolCreateInfo* pCreateInfo, VkDescriptorPool* pDescriptorPool) const;
virtual void		destroyDescriptorPool							(VkDevice device, VkDescriptorPool descriptorPool) const;
virtual VkResult	resetDescriptorPool								(VkDevice device, VkDescriptorPool descriptorPool) const;
virtual VkResult	allocDescriptorSets								(VkDevice device, VkDescriptorPool descriptorPool, VkDescriptorSetUsage setUsage, deUint32 count, const VkDescriptorSetLayout* pSetLayouts, VkDescriptorSet* pDescriptorSets) const;
virtual VkResult	freeDescriptorSets								(VkDevice device, VkDescriptorPool descriptorPool, deUint32 count, const VkDescriptorSet* pDescriptorSets) const;
virtual void		updateDescriptorSets							(VkDevice device, deUint32 writeCount, const VkWriteDescriptorSet* pDescriptorWrites, deUint32 copyCount, const VkCopyDescriptorSet* pDescriptorCopies) const;
virtual VkResult	createFramebuffer								(VkDevice device, const VkFramebufferCreateInfo* pCreateInfo, VkFramebuffer* pFramebuffer) const;
virtual void		destroyFramebuffer								(VkDevice device, VkFramebuffer framebuffer) const;
virtual VkResult	createRenderPass								(VkDevice device, const VkRenderPassCreateInfo* pCreateInfo, VkRenderPass* pRenderPass) const;
virtual void		destroyRenderPass								(VkDevice device, VkRenderPass renderPass) const;
virtual VkResult	getRenderAreaGranularity						(VkDevice device, VkRenderPass renderPass, VkExtent2D* pGranularity) const;
virtual VkResult	createCommandPool								(VkDevice device, const VkCmdPoolCreateInfo* pCreateInfo, VkCmdPool* pCmdPool) const;
virtual void		destroyCommandPool								(VkDevice device, VkCmdPool cmdPool) const;
virtual VkResult	resetCommandPool								(VkDevice device, VkCmdPool cmdPool, VkCmdPoolResetFlags flags) const;
virtual VkResult	createCommandBuffer								(VkDevice device, const VkCmdBufferCreateInfo* pCreateInfo, VkCmdBuffer* pCmdBuffer) const;
virtual void		destroyCommandBuffer							(VkDevice device, VkCmdBuffer commandBuffer) const;
virtual VkResult	beginCommandBuffer								(VkCmdBuffer cmdBuffer, const VkCmdBufferBeginInfo* pBeginInfo) const;
virtual VkResult	endCommandBuffer								(VkCmdBuffer cmdBuffer) const;
virtual VkResult	resetCommandBuffer								(VkCmdBuffer cmdBuffer, VkCmdBufferResetFlags flags) const;
virtual void		cmdBindPipeline									(VkCmdBuffer cmdBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipeline pipeline) const;
virtual void		cmdSetViewport									(VkCmdBuffer cmdBuffer, deUint32 viewportCount, const VkViewport* pViewports) const;
virtual void		cmdSetScissor									(VkCmdBuffer cmdBuffer, deUint32 scissorCount, const VkRect2D* pScissors) const;
virtual void		cmdSetLineWidth									(VkCmdBuffer cmdBuffer, float lineWidth) const;
virtual void		cmdSetDepthBias									(VkCmdBuffer cmdBuffer, float depthBias, float depthBiasClamp, float slopeScaledDepthBias) const;
virtual void		cmdSetBlendConstants							(VkCmdBuffer cmdBuffer, const float blendConst) const;
virtual void		cmdSetDepthBounds								(VkCmdBuffer cmdBuffer, float minDepthBounds, float maxDepthBounds) const;
virtual void		cmdSetStencilCompareMask						(VkCmdBuffer cmdBuffer, VkStencilFaceFlags faceMask, deUint32 stencilCompareMask) const;
virtual void		cmdSetStencilWriteMask							(VkCmdBuffer cmdBuffer, VkStencilFaceFlags faceMask, deUint32 stencilWriteMask) const;
virtual void		cmdSetStencilReference							(VkCmdBuffer cmdBuffer, VkStencilFaceFlags faceMask, deUint32 stencilReference) const;
virtual void		cmdBindDescriptorSets							(VkCmdBuffer cmdBuffer, VkPipelineBindPoint pipelineBindPoint, VkPipelineLayout layout, deUint32 firstSet, deUint32 setCount, const VkDescriptorSet* pDescriptorSets, deUint32 dynamicOffsetCount, const deUint32* pDynamicOffsets) const;
virtual void		cmdBindIndexBuffer								(VkCmdBuffer cmdBuffer, VkBuffer buffer, VkDeviceSize offset, VkIndexType indexType) const;
virtual void		cmdBindVertexBuffers							(VkCmdBuffer cmdBuffer, deUint32 startBinding, deUint32 bindingCount, const VkBuffer* pBuffers, const VkDeviceSize* pOffsets) const;
virtual void		cmdDraw											(VkCmdBuffer cmdBuffer, deUint32 vertexCount, deUint32 instanceCount, deUint32 firstVertex, deUint32 firstInstance) const;
virtual void		cmdDrawIndexed									(VkCmdBuffer cmdBuffer, deUint32 indexCount, deUint32 instanceCount, deUint32 firstIndex, deInt32 vertexOffset, deUint32 firstInstance) const;
virtual void		cmdDrawIndirect									(VkCmdBuffer cmdBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 count, deUint32 stride) const;
virtual void		cmdDrawIndexedIndirect							(VkCmdBuffer cmdBuffer, VkBuffer buffer, VkDeviceSize offset, deUint32 count, deUint32 stride) const;
virtual void		cmdDispatch										(VkCmdBuffer cmdBuffer, deUint32 x, deUint32 y, deUint32 z) const;
virtual void		cmdDispatchIndirect								(VkCmdBuffer cmdBuffer, VkBuffer buffer, VkDeviceSize offset) const;
virtual void		cmdCopyBuffer									(VkCmdBuffer cmdBuffer, VkBuffer srcBuffer, VkBuffer destBuffer, deUint32 regionCount, const VkBufferCopy* pRegions) const;
virtual void		cmdCopyImage									(VkCmdBuffer cmdBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage destImage, VkImageLayout destImageLayout, deUint32 regionCount, const VkImageCopy* pRegions) const;
virtual void		cmdBlitImage									(VkCmdBuffer cmdBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage destImage, VkImageLayout destImageLayout, deUint32 regionCount, const VkImageBlit* pRegions, VkTexFilter filter) const;
virtual void		cmdCopyBufferToImage							(VkCmdBuffer cmdBuffer, VkBuffer srcBuffer, VkImage destImage, VkImageLayout destImageLayout, deUint32 regionCount, const VkBufferImageCopy* pRegions) const;
virtual void		cmdCopyImageToBuffer							(VkCmdBuffer cmdBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkBuffer destBuffer, deUint32 regionCount, const VkBufferImageCopy* pRegions) const;
virtual void		cmdUpdateBuffer									(VkCmdBuffer cmdBuffer, VkBuffer destBuffer, VkDeviceSize destOffset, VkDeviceSize dataSize, const deUint32* pData) const;
virtual void		cmdFillBuffer									(VkCmdBuffer cmdBuffer, VkBuffer destBuffer, VkDeviceSize destOffset, VkDeviceSize fillSize, deUint32 data) const;
virtual void		cmdClearColorImage								(VkCmdBuffer cmdBuffer, VkImage image, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rangeCount, const VkImageSubresourceRange* pRanges) const;
virtual void		cmdClearDepthStencilImage						(VkCmdBuffer cmdBuffer, VkImage image, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rangeCount, const VkImageSubresourceRange* pRanges) const;
virtual void		cmdClearColorAttachment							(VkCmdBuffer cmdBuffer, deUint32 colorAttachment, VkImageLayout imageLayout, const VkClearColorValue* pColor, deUint32 rectCount, const VkRect3D* pRects) const;
virtual void		cmdClearDepthStencilAttachment					(VkCmdBuffer cmdBuffer, VkImageAspectFlags aspectMask, VkImageLayout imageLayout, const VkClearDepthStencilValue* pDepthStencil, deUint32 rectCount, const VkRect3D* pRects) const;
virtual void		cmdResolveImage									(VkCmdBuffer cmdBuffer, VkImage srcImage, VkImageLayout srcImageLayout, VkImage destImage, VkImageLayout destImageLayout, deUint32 regionCount, const VkImageResolve* pRegions) const;
virtual void		cmdSetEvent										(VkCmdBuffer cmdBuffer, VkEvent event, VkPipelineStageFlags stageMask) const;
virtual void		cmdResetEvent									(VkCmdBuffer cmdBuffer, VkEvent event, VkPipelineStageFlags stageMask) const;
virtual void		cmdWaitEvents									(VkCmdBuffer cmdBuffer, deUint32 eventCount, const VkEvent* pEvents, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags destStageMask, deUint32 memBarrierCount, const void* const* ppMemBarriers) const;
virtual void		cmdPipelineBarrier								(VkCmdBuffer cmdBuffer, VkPipelineStageFlags srcStageMask, VkPipelineStageFlags destStageMask, VkBool32 byRegion, deUint32 memBarrierCount, const void* const* ppMemBarriers) const;
virtual void		cmdBeginQuery									(VkCmdBuffer cmdBuffer, VkQueryPool queryPool, deUint32 slot, VkQueryControlFlags flags) const;
virtual void		cmdEndQuery										(VkCmdBuffer cmdBuffer, VkQueryPool queryPool, deUint32 slot) const;
virtual void		cmdResetQueryPool								(VkCmdBuffer cmdBuffer, VkQueryPool queryPool, deUint32 startQuery, deUint32 queryCount) const;
virtual void		cmdWriteTimestamp								(VkCmdBuffer cmdBuffer, VkTimestampType timestampType, VkBuffer destBuffer, VkDeviceSize destOffset) const;
virtual void		cmdCopyQueryPoolResults							(VkCmdBuffer cmdBuffer, VkQueryPool queryPool, deUint32 startQuery, deUint32 queryCount, VkBuffer destBuffer, VkDeviceSize destOffset, VkDeviceSize destStride, VkQueryResultFlags flags) const;
virtual void		cmdPushConstants								(VkCmdBuffer cmdBuffer, VkPipelineLayout layout, VkShaderStageFlags stageFlags, deUint32 start, deUint32 length, const void* values) const;
virtual void		cmdBeginRenderPass								(VkCmdBuffer cmdBuffer, const VkRenderPassBeginInfo* pRenderPassBegin, VkRenderPassContents contents) const;
virtual void		cmdNextSubpass									(VkCmdBuffer cmdBuffer, VkRenderPassContents contents) const;
virtual void		cmdEndRenderPass								(VkCmdBuffer cmdBuffer) const;
virtual void		cmdExecuteCommands								(VkCmdBuffer cmdBuffer, deUint32 cmdBuffersCount, const VkCmdBuffer* pCmdBuffers) const;
